void fun()
{
  int entity_0 = 68;
  char entity_9 = 'H';
  char* entity_6;
  char entity_4[74] = "";
  char* entity_7;
  memset(entity_4, 'g', 74-1);
  entity_4[74-1]='0';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[0]='0';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_4, 74*sizeof(char));
}