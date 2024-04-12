void fun()
{
  char entity_7[84] = "";
  entity_7 = NULL;
  char entity_2[50] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_4 = 'Y';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[65-1]='';
  memset(entity_2, 'w', 50-1);
  entity_2[50-1]='';
  memset(entity_7, 'x', 84-1);
  entity_7[84-1]='';
  memcpy(entity_1, entity_7, 84*sizeof(char));
}