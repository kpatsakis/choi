void fun()
{
  int entity_1 = 32;
  char* entity_0;
  char entity_6[38] = "";
  entity_6 = NULL;
  char entity_7[82] = "";
  entity_7 = NULL;
  memset(entity_7, 'c', 82-1);
  entity_7[82-1]='';
  memset(entity_6, 'e', 38-1);
  entity_6[38-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  entity_1 = 60;
  memcpy(entity_0, entity_7, 82*sizeof(char));
}