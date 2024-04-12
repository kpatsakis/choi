void fun()
{
  char entity_1[85] = "";
  entity_1 = NULL;
  char* entity_7;
  char* entity_9;
  char* entity_2;
  char entity_0[79] = "";
  entity_0 = NULL;
  memset(entity_0, 'A', 79-1);
  entity_0[79-1]='';
  memset(entity_1, 'h', 85-1);
  entity_1[85-1]='';
  entity_7 = (char*)malloc(83*sizeof(char));
  entity_7[83-1]='';
  entity_2 = (char*)malloc(26*sizeof(char));
  entity_2[26-1]='';
  entity_9 = (char*)malloc(19*sizeof(char));
  entity_9[19-1]='';
  strcpy(entity_2, entity_1);
}