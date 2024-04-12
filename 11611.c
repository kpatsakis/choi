void fun()
{
  int entity_0 = 26;
  char* entity_5;
  char entity_2[92] = "";
  char* entity_4;
  char entity_1 = 'z';
  memset(entity_2, 'V', 92-1);
  entity_2[92-1]='0';
  entity_4 = (char*)malloc(17*sizeof(char));
  entity_4[0]='0';
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_2, 92*sizeof(char));
}