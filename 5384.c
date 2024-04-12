void fun()
{
  int entity_5 = 42;
  char entity_9[92] = "";
  entity_9 = NULL;
  char entity_0[68] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_9, 'J', 92-1);
  entity_9[92-1]='';
  entity_1 = (char*)malloc(60*sizeof(char));
  entity_1[60-1]='';
  memset(entity_0, 'a', 68-1);
  entity_0[68-1]='';
  entity_5 = 42;
  entity_0[entity_5] = 'L';
}