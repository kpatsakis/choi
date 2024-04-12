void fun()
{
  int entity_8 = 67;
  char* entity_1;
  char entity_7[6] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'q', 6-1);
  entity_7[6-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  entity_4 = (char*)malloc(18*sizeof(char));
  entity_4[18-1]='';
  memcpy(entity_1, entity_7, 6*sizeof(char));
}