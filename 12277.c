void fun()
{
  int entity_6 = 64;
  char* entity_7;
  char entity_2[100] = "";
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'D', 100-1);
  entity_2[100-1]='0';
  memcpy(entity_7, entity_2, 100*sizeof(char));
}