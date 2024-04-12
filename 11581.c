void fun()
{
  char* entity_0;
  char entity_2[75] = "";
  char entity_1 = 'K';
  char* entity_7;
  char entity_5[100] = "";
  memset(entity_5, 'V', 100-1);
  entity_5[100-1]='0';
  memset(entity_2, 'N', 75-1);
  entity_2[75-1]='0';
  entity_0 = (char*)malloc(16*sizeof(char));
  entity_0[0]='0';
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_0, entity_5, 100*sizeof(char));
}