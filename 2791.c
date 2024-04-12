void fun()
{
  int entity_9 = 73;
  char* entity_8;
  char* entity_7;
  char entity_2[58] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_2, 'p', 58-1);
  entity_2[58-1]='';
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[26-1]='';
  entity_5 = (char*)malloc(74*sizeof(char));
  entity_5[74-1]='';
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[37-1]='';
  strcpy(entity_8, entity_2);
}