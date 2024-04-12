void fun()
{
  int entity_1 = 46;
  char entity_5 = 'x';
  char entity_6 = 'W';
  char entity_2[2] = "";
  entity_2 = NULL;
  char entity_8[59] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_8, 'Q', 59-1);
  entity_8[59-1]='';
  memset(entity_2, 'E', 2-1);
  entity_2[2-1]='';
  memcpy(entity_7, entity_8, 59*sizeof(char));
}