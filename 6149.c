void fun()
{
  int entity_9 = 32;
  char entity_6[17] = "";
  entity_6 = NULL;
  char* entity_0;
  char entity_2 = 'l';
  char* entity_7;
  entity_7 = (char*)malloc(72*sizeof(char));
  entity_7[72-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  memset(entity_6, 'c', 17-1);
  entity_6[17-1]='';
  memcpy(entity_0, entity_6, 17*sizeof(char));
}