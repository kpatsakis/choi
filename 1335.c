void fun()
{
  int entity_3 = 17;
  char* entity_8;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'o', entity_3-1);
  entity_9[entity_3-1]='';
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[68-1]='';
  entity_3 = 27;
  strcpy(entity_8, entity_9);
}