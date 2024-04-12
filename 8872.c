void fun()
{
  int entity_5 = 97;
  entity_5 = 11;
  char entity_9 = 'i';
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_2;
  char entity_0 = 'y';
  entity_2 = (char*)malloc(88*sizeof(char));
  entity_2[88-1]='';
  memset(entity_7, 's', entity_5-1);
  entity_7[entity_5-1]='';
  memcpy(entity_2, entity_7, entity_5*sizeof(char));
}