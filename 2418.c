void fun()
{
  int entity_9 = 63;
  char entity_2 = 'i';
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char entity_3[72] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(12*sizeof(char));
  entity_1[12-1]='';
  memset(entity_3, 'o', 72-1);
  entity_3[72-1]='';
  memset(entity_8, 'I', entity_9-1);
  entity_8[entity_9-1]='';
  memcpy(entity_1, entity_8, entity_9*sizeof(char));
}