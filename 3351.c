void fun()
{
  int entity_3 = 33;
  int entity_6 = 34;
  char entity_9[46] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'F', 46-1);
  entity_9[46-1]='';
  entity_8 = (char*)malloc(6*sizeof(char));
  entity_8[6-1]='';
  entity_9[entity_6] = 'v';
}