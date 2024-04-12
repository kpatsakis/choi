void fun()
{
  int entity_2 = 89;
  char* entity_0;
  char* entity_5;
  char entity_9[94] = "";
  entity_9 = NULL;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(70*sizeof(char));
  entity_5[70-1]='';
  entity_0 = (char*)malloc(72*sizeof(char));
  entity_0[72-1]='';
  memset(entity_8, 'K', entity_2-1);
  entity_8[entity_2-1]='';
  memset(entity_9, 'J', 94-1);
  entity_9[94-1]='';
  entity_2 = 50;
  strcpy(entity_0, entity_8);
}