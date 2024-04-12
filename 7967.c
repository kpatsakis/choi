void fun()
{
  int entity_5 = 98;
  int entity_9 = 32;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'u', entity_9-1);
  entity_1[entity_9-1]='';
  entity_2 = (char*)malloc(66*sizeof(char));
  entity_2[66-1]='';
  entity_1[23] = 'Y';
}