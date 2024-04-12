void fun()
{
  int entity_3 = 79;
  int entity_0 = 60;
  entity_3 = 72;
  char entity_1[24] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_7[89] = "";
  entity_7 = NULL;
  memset(entity_1, 'w', 24-1);
  entity_1[24-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_7, 'h', 89-1);
  entity_7[89-1]='';
  memcpy(entity_5, entity_1, 24*sizeof(char));
}