void fun()
{
  int entity_1 = 34;
  int entity_3 = 1;
  char* entity_5;
  char* entity_4;
  char entity_9[78] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_9, 'b', 78-1);
  entity_9[78-1]='';
  entity_4 = (char*)malloc(72*sizeof(char));
  entity_4[72-1]='';
  entity_3 = 85;
  memcpy(entity_5, entity_9, 78*sizeof(char));
}