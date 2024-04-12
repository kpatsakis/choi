void fun()
{
  int entity_8 = 94;
  int entity_7 = 79;
  char entity_1[69] = "";
  entity_1 = NULL;
  char* entity_6;
  char* entity_5;
  memset(entity_1, 'X', 69-1);
  entity_1[69-1]='';
  entity_6 = (char*)malloc(90*sizeof(char));
  entity_6[90-1]='';
  entity_5 = (char*)malloc(6*sizeof(char));
  entity_5[6-1]='';
  memcpy(entity_5, entity_1, 69*sizeof(char));
}