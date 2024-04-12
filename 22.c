void fun()
{
  int entity_4 = 84;
  char* entity_8;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_0;
  char* entity_9;
  entity_8 = (char*)malloc(14*sizeof(char));
  entity_8[14-1]='';
  entity_0 = (char*)malloc(2*sizeof(char));
  entity_0[2-1]='';
  memset(entity_1, 'V', entity_4-1);
  entity_1[entity_4-1]='';
  entity_9 = (char*)malloc(92*sizeof(char));
  entity_9[92-1]='';
  entity_4 = 88;
  memcpy(entity_8, entity_1, entity_4*sizeof(char));
}