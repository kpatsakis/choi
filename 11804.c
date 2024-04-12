void fun()
{
  char* entity_2;
  char entity_8[35] = "";
  char* entity_6;
  entity_6 = (char*)malloc(64*sizeof(char));
  entity_6[0]='0';
  entity_2 = (char*)malloc(93*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'm', 35-1);
  entity_8[35-1]='0';
  memcpy(entity_2, entity_8, 35*sizeof(char));
}