void fun()
{
  int entity_8 = 66;
  entity_8 = 71;
  char* entity_6;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'c', entity_8-1);
  entity_7[entity_8-1]='';
  entity_6 = (char*)malloc(82*sizeof(char));
  entity_6[82-1]='';
  entity_7[70] = 'E';
}