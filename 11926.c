void fun()
{
  char entity_5[85] = "";
  char* entity_2;
  char* entity_4;
  char* entity_9;
  entity_4 = (char*)malloc(84*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'G', 85-1);
  entity_5[85-1]='0';
  entity_2 = (char*)malloc(23*sizeof(char));
  entity_2[0]='0';
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_5, 85*sizeof(char));
}