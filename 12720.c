void fun()
{
  int entity_7 = 44;
  int entity_9 = 23;
  char* entity_8;
  char* entity_3;
  char entity_5[6] = "";
  char entity_4[6] = "";
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'I', 6-1);
  entity_4[6-1]='0';
  memset(entity_5, 's', 6-1);
  entity_5[6-1]='0';
  entity_8 = (char*)malloc(34*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_3, entity_5, 6*sizeof(char));
}