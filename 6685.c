void fun()
{
  int entity_6 = 67;
  entity_6 = 79;
  char entity_8[98] = "";
  entity_8 = NULL;
  char* entity_1;
  char* entity_7;
  char entity_4[92] = "";
  entity_4 = NULL;
  memset(entity_8, 'O', 98-1);
  entity_8[98-1]='';
  memset(entity_4, 's', 92-1);
  entity_4[92-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  entity_7 = (char*)malloc(59*sizeof(char));
  entity_7[59-1]='';
  memcpy(entity_1, entity_8, 98*sizeof(char));
}