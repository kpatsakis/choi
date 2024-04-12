void fun()
{
  int entity_9 = 20;
  char* entity_6;
  char entity_5[100] = "";
  char* entity_3;
  entity_6 = (char*)malloc(45*sizeof(char));
  entity_6[0]='0';
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'x', 100-1);
  entity_5[100-1]='0';
  memcpy(entity_3, entity_5, 100*sizeof(char));
}