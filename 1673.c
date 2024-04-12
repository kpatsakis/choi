void fun()
{
  int entity_3 = 82;
  char* entity_4;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(28*sizeof(char));
  entity_4[28-1]='';
  memset(entity_2, 'W', entity_3-1);
  entity_2[entity_3-1]='';
  strcpy(entity_4, entity_2);
}