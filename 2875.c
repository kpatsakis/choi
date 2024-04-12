void fun()
{
  int entity_1 = 73;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_2;
  char* entity_8;
  char entity_3[89] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(21*sizeof(char));
  entity_8[21-1]='';
  entity_2 = (char*)malloc(30*sizeof(char));
  entity_2[30-1]='';
  memset(entity_3, 'q', 89-1);
  entity_3[89-1]='';
  memset(entity_7, 'V', entity_1-1);
  entity_7[entity_1-1]='';
  entity_1 = 31;
  memcpy(entity_2, entity_7, entity_1*sizeof(char));
}