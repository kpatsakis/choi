void fun()
{
  char entity_7 = 'H';
  char* entity_0;
  char* entity_3;
  char* entity_9;
  char entity_2[68] = "";
  entity_0 = (char*)malloc(84*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 'V', 68-1);
  entity_2[68-1]='0';
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[0]='0';
  entity_9 = (char*)malloc(68*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_0, entity_2, 68*sizeof(char));
}