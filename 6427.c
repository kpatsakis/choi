void fun()
{
  char* entity_8;
  char entity_5[79] = "";
  entity_5 = NULL;
  char* entity_7;
  char* entity_3;
  char* entity_1;
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[52-1]='';
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[63-1]='';
  memset(entity_5, 'r', 79-1);
  entity_5[79-1]='';
  entity_1 = (char*)malloc(69*sizeof(char));
  entity_1[69-1]='';
  entity_3 = (char*)malloc(89*sizeof(char));
  entity_3[89-1]='';
  strcpy(entity_8, entity_5);
}