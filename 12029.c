void fun()
{
  int entity_8 = 59;
  int entity_6 = 16;
  char* entity_1;
  char entity_2[90] = "";
  char entity_7[45] = "";
  memset(entity_7, 'V', 45-1);
  entity_7[45-1]='0';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'G', 90-1);
  entity_2[90-1]='0';
  memcpy(entity_1, entity_7, 45*sizeof(char));
}