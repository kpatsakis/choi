void fun()
{
  int entity_2 = 8;
  char* entity_7;
  char entity_6[65] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[70-1]='';
  memset(entity_6, 'T', 65-1);
  entity_6[65-1]='';
  entity_6[entity_2] = 'B';
}