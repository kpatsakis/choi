void fun()
{
  char* entity_4;
  char entity_9 = 'M';
  char* entity_7;
  char entity_5[62] = "";
  entity_4 = (char*)malloc(59*sizeof(char));
  entity_4[0]='0';
  entity_7 = (char*)malloc(36*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'S', 62-1);
  entity_5[62-1]='0';
  memcpy(entity_7, entity_5, 62*sizeof(char));
}