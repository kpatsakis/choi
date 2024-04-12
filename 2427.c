void fun()
{
  int entity_0 = 78;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_1;
  char* entity_8;
  entity_1 = (char*)malloc(18*sizeof(char));
  entity_1[18-1]='';
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[41-1]='';
  memset(entity_2, 'W', entity_0-1);
  entity_2[entity_0-1]='';
  entity_0 = 59;
  entity_2[64] = 'e';
}