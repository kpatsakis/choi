void fun()
{
  int entity_8 = 27;
  int entity_3 = 44;
  char* entity_2;
  char entity_9[48] = "";
  entity_9 = NULL;
  memset(entity_9, 'Z', 48-1);
  entity_9[48-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  entity_3 = 10;
  strcpy(entity_2, entity_9);
}