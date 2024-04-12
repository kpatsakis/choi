void fun()
{
  int entity_4 = 56;
  char* entity_7;
  char entity_1[26] = "";
  entity_1 = NULL;
  char entity_5[85] = "";
  entity_5 = NULL;
  memset(entity_5, 'R', 85-1);
  entity_5[85-1]='';
  entity_7 = (char*)malloc(44*sizeof(char));
  entity_7[44-1]='';
  memset(entity_1, 'r', 26-1);
  entity_1[26-1]='';
  entity_5[31] = 'U';
}