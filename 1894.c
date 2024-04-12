void fun()
{
  int entity_2 = 2;
  entity_2 = 74;
  char* entity_7;
  char entity_9 = 'Y';
  char* entity_4;
  char entity_6[62] = "";
  entity_6 = NULL;
  memset(entity_6, 'M', 62-1);
  entity_6[62-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  entity_4 = (char*)malloc(35*sizeof(char));
  entity_4[35-1]='';
  memcpy(entity_7, entity_6, 62*sizeof(char));
}