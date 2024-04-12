void fun()
{
  int entity_6 = 34;
  char* entity_7;
  char entity_4[16] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(11*sizeof(char));
  entity_7[11-1]='';
  memset(entity_4, 'u', 16-1);
  entity_4[16-1]='';
  entity_4[entity_6] = 'D';
}