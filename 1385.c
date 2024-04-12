void fun()
{
  int entity_1 = 56;
  char* entity_2;
  char* entity_7;
  char entity_8[67] = "";
  entity_8 = NULL;
  memset(entity_8, 'N', 67-1);
  entity_8[67-1]='';
  entity_7 = (char*)malloc(85*sizeof(char));
  entity_7[85-1]='';
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[53-1]='';
  entity_8[84] = 'v';
}