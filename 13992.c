void fun()
{
  int entity_5 = 100;
  entity_5 = 60;
  char* entity_7;
  char* entity_1;
  char entity_2[76] = "";
  char* entity_4;
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[0]='0';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(1*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'Z', 76-1);
  entity_2[76-1]='0';
  memcpy(entity_7, entity_2, 76*sizeof(char));
}