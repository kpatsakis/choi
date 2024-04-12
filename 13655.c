void fun()
{
  int entity_6 = 89;
  entity_6 = 92;
  char entity_5[13] = "";
  char* entity_8;
  char* entity_1;
  memset(entity_5, 'g', 13-1);
  entity_5[13-1]='0';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[0]='0';
  entity_8 = (char*)malloc(70*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_1, entity_5, 13*sizeof(char));
}