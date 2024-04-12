void fun()
{
  int entity_5 = 63;
  int entity_7 = 50;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char entity_3 = 'Y';
  char* entity_2;
  entity_2 = (char*)malloc(68*sizeof(char));
  entity_2[68-1]='';
  memset(entity_6, 't', entity_5-1);
  entity_6[entity_5-1]='';
  entity_5 = 20;
  memcpy(entity_2, entity_6, entity_5*sizeof(char));
}