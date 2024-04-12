void fun()
{
  int entity_1 = 53;
  int entity_2 = 22;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char entity_8 = 'B';
  char* entity_4;
  memset(entity_7, 't', entity_2-1);
  entity_7[entity_2-1]='';
  entity_4 = (char*)malloc(16*sizeof(char));
  entity_4[16-1]='';
  entity_2 = 75;
  memcpy(entity_4, entity_7, entity_2*sizeof(char));
}