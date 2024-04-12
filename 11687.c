void fun()
{
  int entity_7 = 52;
  char* entity_8;
  char* entity_2;
  char entity_4[10] = "";
  char* entity_6;
  memset(entity_4, 'u', 10-1);
  entity_4[10-1]='0';
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[0]='0';
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[0]='0';
  entity_6 = (char*)malloc(94*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_8, entity_4);
}