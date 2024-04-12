void fun()
{
  int entity_8 = 18;
  char entity_7[59] = "";
  entity_7 = NULL;
  char entity_3[26] = "";
  entity_3 = NULL;
  char* entity_6;
  char* entity_1;
  memset(entity_7, 'U', 59-1);
  entity_7[59-1]='';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[9-1]='';
  memset(entity_3, 'C', 26-1);
  entity_3[26-1]='';
  entity_1 = (char*)malloc(63*sizeof(char));
  entity_1[63-1]='';
  entity_7[entity_8] = 'W';
}