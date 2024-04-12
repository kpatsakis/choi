void fun()
{
  int entity_9 = 70;
  int entity_7 = 5;
  char* entity_2;
  char entity_8 = 'i';
  char entity_1[12] = "";
  entity_1 = NULL;
  entity_2 = (char*)malloc(26*sizeof(char));
  entity_2[26-1]='';
  memset(entity_1, 'x', 12-1);
  entity_1[12-1]='';
  memcpy(entity_2, entity_1, 12*sizeof(char));
}