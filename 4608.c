void fun()
{
  int entity_1 = 63;
  char entity_4[82] = "";
  entity_4 = NULL;
  char entity_7[85] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_7, 'h', 85-1);
  entity_7[85-1]='';
  memset(entity_4, 'J', 82-1);
  entity_4[82-1]='';
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[62-1]='';
  memcpy(entity_0, entity_7, 85*sizeof(char));
}