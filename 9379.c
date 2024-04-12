void fun()
{
  int entity_4 = 29;
  int entity_3 = 51;
  int entity_1 = 26;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char entity_7[68] = "";
  entity_7 = NULL;
  char* entity_5;
  memset(entity_7, 'G', 68-1);
  entity_7[68-1]='';
  entity_5 = (char*)malloc(69*sizeof(char));
  entity_5[69-1]='';
  memset(entity_2, 'D', entity_1-1);
  entity_2[entity_1-1]='';
  entity_1 = 5;
  memcpy(entity_5, entity_2, entity_1*sizeof(char));
}