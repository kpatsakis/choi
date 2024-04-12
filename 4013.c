void fun()
{
  int entity_9 = 27;
  char* entity_3;
  char entity_6[94] = "";
  entity_6 = NULL;
  char* entity_4;
  char* entity_1;
  entity_1 = (char*)malloc(51*sizeof(char));
  entity_1[51-1]='';
  memset(entity_6, 'v', 94-1);
  entity_6[94-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  entity_4 = (char*)malloc(20*sizeof(char));
  entity_4[20-1]='';
  memcpy(entity_3, entity_6, 94*sizeof(char));
}