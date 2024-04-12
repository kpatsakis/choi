void fun()
{
  int entity_0 = 36;
  int entity_1 = 60;
  entity_0 = 36;
  char* entity_7;
  char entity_2[16] = "";
  entity_2 = NULL;
  char entity_8 = 'j';
  memset(entity_2, 'N', 16-1);
  entity_2[16-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memcpy(entity_7, entity_2, 16*sizeof(char));
}