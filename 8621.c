void fun()
{
  int entity_7 = 12;
  char* entity_2;
  char entity_6[16] = "";
  entity_6 = NULL;
  memset(entity_6, 'a', 16-1);
  entity_6[16-1]='';
  entity_2 = (char*)malloc(36*sizeof(char));
  entity_2[36-1]='';
  entity_7 = 90;
  entity_6[entity_7] = 'D';
}