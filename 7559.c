void fun()
{
  int entity_6 = 29;
  int entity_9 = 88;
  char entity_4 = 'V';
  char* entity_8;
  char* entity_1;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(27*sizeof(char));
  entity_1[27-1]='';
  entity_8 = (char*)malloc(50*sizeof(char));
  entity_8[50-1]='';
  memset(entity_2, 'D', entity_9-1);
  entity_2[entity_9-1]='';
  memcpy(entity_8, entity_2, entity_9*sizeof(char));
}