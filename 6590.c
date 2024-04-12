void fun()
{
  char entity_8[6] = "";
  entity_8 = NULL;
  char* entity_1;
  char* entity_7;
  memset(entity_8, 'H', 6-1);
  entity_8[6-1]='';
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[26-1]='';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[56-1]='';
  memcpy(entity_1, entity_8, 6*sizeof(char));
}